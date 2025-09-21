@interface TKSmartCardSlotScreen : NSObject

@property long long physicalColumnCount;
@property long long physicalRowCount;
@property long long virtualColumnCount;
@property long long virtualRowCount;

- (char)displayMessage:(id)a0 x:(long long)a1 y:(long long)a2 duration:(double)a3 clearScreen:(char)a4;

@end
