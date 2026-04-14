@class NSMutableDictionary;

@interface _SchemaRenditionTuple : NSObject {
    struct _renditionkeytoken { unsigned short identifier; unsigned short value; } key[22];
    NSMutableDictionary *info;
}

- (id)description;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
