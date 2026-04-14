@class NSString;

@interface SCRTaskIdentifier : NSObject <NSCopying> {
    NSString *_identifier;
}

@property (readonly, nonatomic) NSString *name;

+ (id)new;
+ (id)identifier;
+ (id)identifierWithName:(id)a0;

- (id)_initWithName:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
