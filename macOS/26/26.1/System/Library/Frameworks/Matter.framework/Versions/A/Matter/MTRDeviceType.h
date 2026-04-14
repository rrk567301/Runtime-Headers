@class NSNumber, NSString;

@interface MTRDeviceType : NSObject <NSCopying> {
    const struct MTRDeviceTypeData { unsigned int x0; int x1; id x2; } *_meta;
}

@property (readonly, copy, nonatomic) NSNumber *id;
@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isUtility;

+ (id)deviceTypeForID:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
