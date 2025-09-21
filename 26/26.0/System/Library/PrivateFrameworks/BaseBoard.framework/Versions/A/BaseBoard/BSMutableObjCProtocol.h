@class NSString, NSMutableArray;

@interface BSMutableObjCProtocol : NSObject <NSCopying> {
    NSString *_name;
    NSMutableArray *_properties;
}

+ (id)protocolWithName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)properties;
- (void).cxx_destruct;
- (void)removeProperty:(id)a0;
- (void)addProperty:(id)a0;

@end
