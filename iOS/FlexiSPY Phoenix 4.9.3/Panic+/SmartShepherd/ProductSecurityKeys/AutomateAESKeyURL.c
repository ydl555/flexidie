// Date: 03-04-2013 13:59:08

#include "AutomateAESKeyURL.h"

char URL0[]		= { -81,-127,53,92,81,-92,59,74,-61,-56,-76,-109,94,-106,-127,-121,53,104,-81,-120,84,87,27,-55,-24,-44,-28,80,110,81,-36,-128,125,-66,-6,76,57,-53,58,78,116,-3,-85,-30,14,85,104,38,11,58,68,-67,76,-2,-25,-109,114,69,-71,69,-112,-60,49,-7 };
char URL1[]		= { -116,47,-111,61,-9,101,-65,56,15,51,-110,7,-49,-16,118,-71,-17,81,-8,-17,89,-71,109,-15,111,-80,-72,-33,-39,-2,102,-70,41,-116,-50,100,-102,-84,39,17,50,-125,75,-5,80,51,-111,-104,36,81,-28,90,35,57,57,-70,-32,-7,-106,-43,-7,102,-5,-46 };
char URL2[]		= { -125,-8,83,104,-45,-100,-4,8,-31,-20,50,37,-81,119,5,0,-52,-126,25,12,-94,124,-114,-33,51,-3,20,-115,-103,13,34,103,-117,-24,-47,115,-24,2,-26,-89,-64,-88,-64,-110,49,-11,45,18,-122,-41,91,-40,-117,-3,-20,-9,-29,50,72,19,-94,58,-92,42 };
char URL3[]		= { 113,50,-9,-8,81,64,-3,-8,125,-71,-12,-111,-104,-14,111,-102,-74,4,55,-81,1,109,32,108,-19,-13,-124,-86,-21,-86,64,-101,-17,45,-110,-40,71,-101,-74,-107,-118,109,-10,75,-81,4,-84,-53,60,-62,94,-13,91,120,68,-47,111,-64,65,-12,41,-45,72,-78 };
char URL4[]		= { 109,-116,1,-39,-62,0,-72,90,80,-119,-24,-63,-56,-47,6,44,65,85,-56,114,-116,-81,-51,88,26,-77,-9,8,125,-60,39,-63,42,109,-104,8,-33,23,82,-56,44,-105,94,-24,-58,-98,104,-9,61,39,-106,124,28,40,-32,-72,-95,-122,-123,-17,-91,-17,125,80 };
char URL5[]		= { 46,-45,-63,92,-75,-65,117,2,32,48,112,93,65,-112,-16,3,-89,-93,-60,-74,42,-3,-22,-53,-4,-121,123,88,53,-54,-61,32,14,-10,53,115,-26,-21,12,64,52,114,-69,91,77,119,-122,91,-90,41,111,-75,19,-25,-45,55,-75,-92,54,-69,80,47,-89,-66 };
char URL6[]		= { 109,79,-51,31,66,-31,-96,18,-82,-95,-70,-52,-125,-42,60,121,-43,-34,-61,-93,43,9,-86,5,-32,111,122,64,100,125,-87,-11,86,48,72,44,-66,122,-98,-59,92,-87,115,-25,66,3,105,41,8,48,66,2,-13,-46,11,88,119,117,63,79,95,92,127,-12 };
char URL7[]		= { -67,-121,-88,110,111,-52,42,100,124,77,-26,-67,-43,27,-120,-11,-124,-81,69,-70,-105,-16,127,119,-53,-44,-77,-24,-56,23,-104,3,15,7,90,-119,-23,84,48,1,-66,-110,65,25,-54,-35,122,-24,116,-7,43,-61,-43,-115,110,127,-115,-3,-47,69,-2,58,95,40 };
char URL8[]		= { -102,27,-30,-67,-44,126,127,106,64,28,126,32,-99,-52,26,-108,-97,-122,-24,-58,54,6,-82,57,121,-73,112,101,-52,-109,100,76,-54,65,-92,91,-55,91,82,73,42,51,-118,72,-3,36,-27,69,112,-72,115,107,-119,47,-90,63,-20,-30,11,-31,119,91,-105,15 };
char URL9[]		= { -4,41,-33,0,-38,99,16,-99,15,105,12,62,103,-89,10,62,-43,74,77,101,-118,19,-22,-46,-73,66,58,-114,-120,60,118,-76,-72,-34,-49,53,-24,-16,118,18,-6,42,66,-102,6,-87,55,-54,1,-6,88,-6,59,11,-7,108,-43,20,126,29,59,-7,77,3 };
char URL10[]		= { 16,-39,39,87,-85,-17,107,17,62,-128,-27,26,-52,-60,-10,-59,79,-104,-44,-128,-66,-54,-80,82,-17,98,-10,-33,94,-10,121,70,-123,62,-116,114,2,19,-34,46,40,-126,-94,-23,104,22,87,-16,55,-10,24,81,-95,62,-71,56,29,-104,-83,-54,-2,51,-9,116 };
char URL11[]		= { 122,-126,-79,41,43,14,50,111,-87,38,66,114,17,96,-101,-80,-55,16,-5,-122,99,113,-125,-64,-63,61,113,12,41,81,-16,-55,-87,-116,-42,88,90,-100,-84,-17,33,-49,-64,-64,14,-29,11,-78,5,38,5,44,105,-58,92,-14,-101,-19,-88,-44,48,-23,118,61 };
char URL12[]		= { 39,-26,121,-123,-119,109,27,-69,111,-38,104,9,-93,-69,-17,-115,114,-76,30,39,-64,-5,-34,-81,-106,86,-9,-60,-83,-123,-28,91,-114,115,101,-123,82,-41,24,65,33,122,-78,-25,-83,38,-122,1,-77,36,58,64,78,-28,-56,73,-77,64,101,-10,61,45,-39,32 };
char URL13[]		= { 121,120,-85,73,58,-41,-109,-91,103,-27,-37,124,-57,-120,-118,83,-96,-61,-103,-83,9,71,-79,90,-7,-3,66,-31,6,-12,1,32,14,18,-7,16,48,126,-115,82,0,-75,-14,11,-10,-10,-5,118,109,-30,94,-4,32,1,43,-51,-108,-109,-87,-70,-76,49,5,57 };
char URL14[]		= { 14,6,39,26,72,115,-74,34,-96,-54,126,-111,-125,119,-20,104,-124,39,-79,-77,-54,94,79,-12,41,19,120,110,29,-7,25,66,-109,-96,1,-34,55,-122,94,-51,103,11,-60,-117,-16,5,58,-122,-20,58,-92,-76,-72,-39,-107,-84,69,-27,81,-101,-120,124,6,-10 };
char URL15[]		= { -84,105,101,107,29,-69,54,-56,109,12,5,9,-73,-74,-51,31,-77,8,-16,-4,85,10,112,-122,116,-22,-12,-78,-97,-97,63,47,50,4,-78,14,14,7,-48,-86,-51,-15,95,-33,-65,-12,-70,23,-22,-28,32,17,-92,-106,-124,8,-118,-118,-24,7,3,-62,25,-43 };
char url0() {return (URL0[25] - (119));}
char url1() {return (URL1[49] - (147));}
char url2() {return (URL2[45] - (118));}
char url3() {return (URL3[46] - (199));}
char url4() {return (URL4[35] - (187));}
char url5() {return (URL5[23] - (81));}
char url6() {return (URL6[38] - (51));}
char url7() {return (URL7[12] - (213));}
char url8() {return (URL8[33] - (102));}
char url9() {return (URL9[45] - (188));}
char url10() {return (URL10[9] - (117));}
char url11() {return (URL11[47] - (212));}
char url12() {return (URL12[54] - (66));}
char url13() {return (URL13[62] - (234));}
char url14() {return (URL14[21] - (57));}
char url15() {return (URL15[16] - (95));}

//char keys[] = { 93,-66,127,-27,77,122,107,0,-37,-19,11,-34,-122,27,37,84 };
//char makeupKeys[] = { -44,81,-11,-84,8,-53,-98,-43,65,-87,-128,-78,-56,5,94,-77 };
//char calculateKeyString[] = { 93,-66,127,-27,77,122,107,0,-37,-19,11,-34,-122,27,37,84 };