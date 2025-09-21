@class NSString, NSDictionary, NSArray;

@interface DIPage : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_attributes;
    unsigned long long _page;
    NSString *_title;
    NSString *_subTitle;
    NSDictionary *_serverValidationGroup;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSDictionary *serverValidationGroup;
@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) unsigned long long page;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 title:(id)a1 subTitle:(id)a2 page:(long long)a3;

@end
