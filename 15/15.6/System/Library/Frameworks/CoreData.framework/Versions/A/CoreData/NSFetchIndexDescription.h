@class NSString, NSArray, NSPredicate, NSEntityDescription;

@interface NSFetchIndexDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    NSString *_name;
    NSArray *_elements;
    NSEntityDescription *_entity;
    NSPredicate *_partialIndexPredicate;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *name;
@property (copy) NSArray *elements;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (copy) NSPredicate *partialIndexPredicate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)_compare:(id)a0;
- (char)_isEditable;
- (void)_setEntity:(id)a0;
- (void)_throwIfNotEditable;
- (id)initWithName:(id)a0 elements:(id)a1;
- (id)initWithName:(id)a0 predicate:(id)a1 elements:(id)a2 entity:(id)a3;

@end
