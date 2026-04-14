@interface ISDDataDirectoryVersion : NSObject {
    int _version;
}

- (id)initFromPath:(id)a0;
- (BOOL)isTiger;
- (BOOL)isLeopard;
- (id)arrayAsGlobalIds:(id)a0;
- (BOOL)usesISDGlobalId;
- (id)asGlobalId:(id)a0;
- (id)initWithDataVersion:(int)a0;
- (BOOL)isSnowLeopard;
- (int)dataDirectoryType;

@end
