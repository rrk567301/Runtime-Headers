@class NSString, CTLazuliMessageIDList;

@interface CTLazuliSpamReportInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *spamReportingUri;
@property (nonatomic) char isChatbot;
@property (retain, nonatomic) NSString *destinationUri;
@property (retain, nonatomic) CTLazuliMessageIDList *messageIDList;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) long long spamType;
@property (retain, nonatomic) NSString *freeBodyText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (char)isEqualToCTLazuliSpamReportInformation:(id)a0;

@end
