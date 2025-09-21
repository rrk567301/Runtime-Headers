@class NSString, NSArray, NSData, NSNumber;

@interface CTPNRRequestType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSString *embedded;
@property (retain, nonatomic) NSNumber *attemptCount;
@property (retain, nonatomic) NSArray *pnrReqList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToCTPNRRequestType:(id)a0;

@end
