@class NSMutableDictionary;

@interface _SchemaRenditionTuple : NSObject {
    struct _renditionkeytoken { unsigned short identifier; unsigned short value; } key[22];
    NSMutableDictionary *info;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void)dealloc;

@end
