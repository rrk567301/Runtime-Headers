@class NSString;

@interface IRHomeSuggestion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *targetUUID;
@property (retain, nonatomic) NSString *targetName;
@property (retain, nonatomic) NSString *accessoryServiceUUID;
@property (retain, nonatomic) NSString *homeUUID;
@property (nonatomic) double score;
@property (retain, nonatomic) NSString *suggestionReason;
@property (retain, nonatomic) NSString *presentationMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 targetUUID:(id)a1 targetName:(id)a2 accessoryServiceUUID:(id)a3 homeUUID:(id)a4 score:(double)a5 suggestionReason:(id)a6;
- (id)initWithType:(long long)a0 targetUUID:(id)a1 targetName:(id)a2 accessoryServiceUUID:(id)a3 homeUUID:(id)a4 score:(double)a5 suggestionReason:(id)a6 presentationMode:(id)a7;

@end
