@class NSString, NSDate;

@interface ATXExecutableReference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) char shouldClearOnEngagement;
@property (nonatomic) char shouldPurge;
@property (nonatomic) char suggestionIsHidden;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDict;
- (id)initWithClientModelId:(id)a0 date:(id)a1 shouldClearOnEngagement:(char)a2;
- (id)initWithClientModelId:(id)a0 date:(id)a1 shouldClearOnEngagement:(char)a2 shouldPurge:(char)a3 suggestionIsHidden:(char)a4;
- (void)updateDateTo:(id)a0;

@end
