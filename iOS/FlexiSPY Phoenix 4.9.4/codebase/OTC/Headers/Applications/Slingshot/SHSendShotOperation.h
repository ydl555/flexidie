/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSOperation.h"

//#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSString, SHShot;

@interface SHSendShotOperation : NSOperation <NSCoding>
{
    NSDate *_uploadStartTime;
    NSDate *_saveStartTime;
    BOOL _executing;
    BOOL _finished;
    SHShot *_shot;
    NSArray *_recipients;
    NSArray *_unlockedShotIds;
    NSString *_originalShotIdentifier;
    int _failedCount;
//    id <SHSendShotOperationDelegate> _delegate;
}

//@property(nonatomic) __weak id <SHSendShotOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int failedCount; // @synthesize failedCount=_failedCount;
@property(copy, nonatomic) NSString *originalShotIdentifier; // @synthesize originalShotIdentifier=_originalShotIdentifier;
@property(copy, nonatomic) NSArray *unlockedShotIds; // @synthesize unlockedShotIds=_unlockedShotIds;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) SHShot *shot; // @synthesize shot=_shot;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
//- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)start;
- (BOOL)isConcurrent;
- (id)initWithShot:(id)arg1 recipients:(id)arg2 unlockedShotIdentifiers:(id)arg3;

@end
