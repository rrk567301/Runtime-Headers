@class NSDictionary;

@interface CERecommendationStringTemplate : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *titleTemplates;
@property (retain, nonatomic) NSDictionary *subTitleTemplates;
@property (retain, nonatomic) NSDictionary *messageTemplates;
@property (retain, nonatomic) NSDictionary *actionTitleTemplates;

- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)actionTitleTemplateForKey:(id)a0;
- (id)messageTemplateForKey:(id)a0;
- (id)subTitleTemplateForKey:(id)a0;
- (id)titleTemplateForKey:(id)a0;

@end
