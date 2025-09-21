@interface GEODefaultEnvironmentInfo : GEOEnvironmentInfo

- (id)init;
- (char)isActive;
- (id)_manifestURLString;
- (void)makeActive;

@end
