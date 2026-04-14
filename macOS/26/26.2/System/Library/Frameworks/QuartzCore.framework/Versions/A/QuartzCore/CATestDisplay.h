@interface CATestDisplay : CADisplay {
    long long _type;
}

+ (id)mainTestDisplay;
+ (id)fakeDisplayWithType:(long long)a0;
+ (id)testDisplays;
+ (id)tvTestDisplay;

- (unsigned long long)pointScale;
- (id)nativeOrientation;
- (double)latency;
- (id)currentMode;
- (BOOL)isCloned;
- (id)immutableCopy;
- (unsigned int)seed;
- (id)availableModes;
- (id)initWithType:(long long)a0;
- (BOOL)isExternal;
- (BOOL)isCloningSupported;
- (long long)tag;
- (int)processId;
- (BOOL)isOverscanned;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)uniqueId;
- (id)name;
- (id)deviceName;
- (unsigned int)displayId;
- (struct CGSize { double x0; double x1; })overscanAmounts;
- (id)preferredMode;
- (id)overscanAdjustment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (long long)displayType;
- (unsigned int)connectionSeed;

@end
