@class NSString, CTLazuliMessageIDList;

@interface CTLazuliSpamReportInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *spamReportingUri;
@property (nonatomic) BOOL isChatbot;
@property (retain, nonatomic) NSString *destinationUri;
@property (retain, nonatomic) CTLazuliMessageIDList *messageIDList;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) long long spamType;
@property (retain, nonatomic) NSString *freeBodyText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliSpamReportInformation:(id)a0;

@end
