@class NSString, NSData, NSArray;

@interface FudPersonalizationRequest : NSObject <NSSecureCoding> {
    char _cproSet;
    char _csecSet;
    char _cepoSet;
    char _useSSOCredentials;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *requestName;
@property (retain, nonatomic) NSString *requestPrefix;
@property (nonatomic) int responseFormat;
@property (nonatomic) unsigned int boardID;
@property (nonatomic) unsigned int chipID;
@property (nonatomic) unsigned long long ecID;
@property (retain, nonatomic) NSData *extEcID;
@property (nonatomic) char globalSigning;
@property (nonatomic) unsigned int securityDomain;
@property (nonatomic) char productionMode;
@property (nonatomic) char securityMode;
@property (retain, nonatomic) NSData *nonceHash;
@property (nonatomic) unsigned int chipEpoch;
@property (nonatomic) char enableMixMatch;
@property (retain, nonatomic) NSArray *objectList;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) unsigned short responseAlignment;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (char)isSecurityModeSet;
- (char)isChipEpochSet;
- (char)isProductionModeSet;
- (void)setUseSSOCredentials:(char)a0;
- (char)useSSOCredentials;

@end
