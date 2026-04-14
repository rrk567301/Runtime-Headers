@class NSArray, NSString, NSDictionary, NSError;

@interface NPTPingResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *pings;
@property double minLatency;
@property double maxLatency;
@property double meanLatency;
@property double standardDeviation;
@property double percentLost;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDictionary *asDictionary;

- (void)populateFields;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPings:(id)a0 usingAddress:(id)a1;
- (double)calculateStandardDeviation;
- (id)init;

@end
