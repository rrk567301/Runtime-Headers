@class NSArray, NSDictionary, NSMutableDictionary, NSMutableArray;

@interface RSObjectAsset : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_objects;
    NSMutableDictionary *_groups;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSDictionary *groups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)GetAllObjects;

@end
