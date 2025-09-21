@class NSString, NSFetchIndexDescription, NSPropertyDescription;

@interface NSFetchIndexElementDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    NSPropertyDescription *_property;
    unsigned long long _collationType;
    NSFetchIndexDescription *_indexDescription;
    struct __indexElementDescriptionFlags { unsigned char _ascending : 1; unsigned char _propertyIsRetained : 1; unsigned char _unique : 1; unsigned int _reservedEntityDescription : 29; } _indexElementDescriptionFlags;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain) NSPropertyDescription *property;
@property (readonly, retain) NSString *propertyName;
@property unsigned long long collationType;
@property (getter=isAscending) char ascending;
@property (readonly, nonatomic) NSFetchIndexDescription *indexDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProperty:(id)a0 collationType:(unsigned long long)a1;

@end
