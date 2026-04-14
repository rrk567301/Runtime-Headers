@interface CATestDisplay : CADisplay {
    long long _type;
}

+ (id)mainTestDisplay;
+ (id)fakeDisplayWithType:(long long)a0;
+ (id)testDisplays;
+ (id)tvTestDisplay;

- (id)uniqueId;
- (id)currentMode;
- (unsigned int)seed;
- (BOOL)isCloned;
- (id)overscanAdjustment;
- (double)latency;
- (long long)tag;
- (struct CGSize { double x0; double x1; })overscanAmounts;
- (unsigned long long)pointScale;
- (id)initWithType:(long long)a0;
- (int)processId;
- (id)deviceName;
- (id)immutableCopy;
- (unsigned int)connectionSeed;
- (id)preferredMode;
- (unsigned int)displayId;
- (long long)displayType;
- (BOOL)isOverscanned;
- (id)name;
- (id)nativeOrientation;
- (id)availableModes;
- (BOOL)isExternal;
- (BOOL)isCloningSupported;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;

@end
