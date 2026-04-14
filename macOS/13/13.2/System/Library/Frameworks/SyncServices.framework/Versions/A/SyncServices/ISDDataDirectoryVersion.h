@interface ISDDataDirectoryVersion : NSObject {
    int _version;
}

- (id)initFromPath:(id)a0;
- (id)initWithDataVersion:(int)a0;
- (BOOL)isTiger;
- (BOOL)isLeopard;
- (BOOL)isSnowLeopard;
- (int)dataDirectoryType;
- (BOOL)usesISDGlobalId;
- (id)asGlobalId:(id)a0;
- (id)arrayAsGlobalIds:(id)a0;

@end
