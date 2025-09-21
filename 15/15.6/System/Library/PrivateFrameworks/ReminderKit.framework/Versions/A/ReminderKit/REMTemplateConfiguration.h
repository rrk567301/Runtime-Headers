@class REMObjectID;

@interface REMTemplateConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *sourceListID;
@property (readonly, nonatomic) char shouldSaveCompleted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSourceListID:(id)a0 shouldSaveCompleted:(char)a1;

@end
