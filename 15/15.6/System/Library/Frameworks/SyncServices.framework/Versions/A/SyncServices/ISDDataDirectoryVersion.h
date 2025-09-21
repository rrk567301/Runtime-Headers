@interface ISDDataDirectoryVersion : NSObject {
    int _version;
}

- (id)initFromPath:(id)a0;
- (char)usesISDGlobalId;
- (char)isTiger;
- (id)arrayAsGlobalIds:(id)a0;
- (id)asGlobalId:(id)a0;
- (int)dataDirectoryType;
- (id)initWithDataVersion:(int)a0;
- (char)isLeopard;
- (char)isSnowLeopard;

@end
