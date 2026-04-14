@interface CATestDisplay : CADisplay {
    long long _type;
}

+ (id)mainTestDisplay;
+ (id)fakeDisplayWithType:(long long)a0;
+ (id)testDisplays;
+ (id)tvTestDisplay;

- (int)processId;
- (double)latency;
- (unsigned long long)pointScale;
- (id)uniqueId;
- (id)deviceName;
- (unsigned int)displayId;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)isOverscanned;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (long long)displayType;
- (BOOL)isCloningSupported;
- (long long)tag;
- (unsigned int)connectionSeed;
- (BOOL)isCloned;
- (id)currentMode;
- (id)nativeOrientation;
- (id)preferredMode;
- (id)initWithType:(long long)a0;
- (struct CGSize { double x0; double x1; })overscanAmounts;
- (id)overscanAdjustment;
- (BOOL)isExternal;
- (id)name;
- (id)availableModes;
- (id)immutableCopy;
- (unsigned int)seed;

@end
