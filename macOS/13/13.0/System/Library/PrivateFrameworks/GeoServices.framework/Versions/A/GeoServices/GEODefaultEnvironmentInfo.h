@interface GEODefaultEnvironmentInfo : GEOEnvironmentInfo

- (id)init;
- (BOOL)isActive;
- (void)makeActive;
- (id)_manifestURLString;

@end
