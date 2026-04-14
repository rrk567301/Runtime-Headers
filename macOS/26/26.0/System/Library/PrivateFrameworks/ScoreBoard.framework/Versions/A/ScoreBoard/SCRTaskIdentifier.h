@class NSString;

@interface SCRTaskIdentifier : NSObject <NSCopying> {
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *name;

+ (id)identifier;
+ (id)new;
+ (id)identifierWithName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (id)_initWithName:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
