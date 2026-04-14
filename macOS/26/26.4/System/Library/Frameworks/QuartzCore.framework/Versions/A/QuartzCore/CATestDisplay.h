@interface CATestDisplay : CADisplay {
    long long _type;
}

+ (id)mainTestDisplay;
+ (id)fakeDisplayWithType:(long long)a0;
+ (id)testDisplays;
+ (id)tvTestDisplay;

- (unsigned int)seed;
- (id)uniqueId;
- (BOOL)isCloned;
- (id)currentMode;
- (double)latency;
- (BOOL)isOverscanned;
- (BOOL)isExternal;
- (id)name;
- (id)initWithType:(long long)a0;
- (id)deviceName;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)isCloningSupported;
- (unsigned int)displayId;
- (id)overscanAdjustment;
- (long long)tag;
- (struct CGSize { double x0; double x1; })overscanAmounts;
- (long long)displayType;
- (id)immutableCopy;
- (id)nativeOrientation;
- (int)processId;
- (unsigned int)connectionSeed;
- (unsigned long long)pointScale;
- (id)availableModes;
- (id)preferredMode;

@end
