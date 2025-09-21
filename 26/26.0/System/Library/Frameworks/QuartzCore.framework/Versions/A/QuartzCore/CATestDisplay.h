@interface CATestDisplay : CADisplay {
    long long _type;
}

+ (id)mainTestDisplay;
+ (id)fakeDisplayWithType:(long long)a0;
+ (id)testDisplays;
+ (id)tvTestDisplay;

- (unsigned int)displayId;
- (BOOL)isCloned;
- (long long)tag;
- (struct CGSize { double x0; double x1; })overscanAmounts;
- (double)latency;
- (id)deviceName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (int)processId;
- (id)initWithType:(long long)a0;
- (id)nativeOrientation;
- (unsigned long long)pointScale;
- (id)preferredMode;
- (long long)displayType;
- (unsigned int)connectionSeed;
- (unsigned int)seed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isCloningSupported;
- (id)availableModes;
- (id)name;
- (BOOL)isExternal;
- (id)currentMode;
- (BOOL)isOverscanned;
- (id)immutableCopy;
- (id)uniqueId;
- (id)overscanAdjustment;

@end
