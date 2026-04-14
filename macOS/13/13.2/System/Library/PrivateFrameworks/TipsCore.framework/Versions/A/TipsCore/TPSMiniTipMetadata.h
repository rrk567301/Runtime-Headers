@class NSString, NSDictionary, TPSDocument, NSError, TPSMonitoringEvents;

@interface TPSMiniTipMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long customizationID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) TPSDocument *content;
@property (copy, nonatomic) TPSMonitoringEvents *monitoringEvents;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithContent:(id)a0;

@end
