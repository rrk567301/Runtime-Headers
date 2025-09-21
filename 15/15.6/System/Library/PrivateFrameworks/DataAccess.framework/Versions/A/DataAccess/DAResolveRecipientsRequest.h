@class NSArray, NSDate;

@interface DAResolveRecipientsRequest : NSObject

@property (retain, nonatomic) NSArray *emailAddresses;
@property (nonatomic) char retrieveCertificates;
@property (nonatomic) char retrieveAvailablilty;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmailAddresses:(id)a0;
- (id)initWithEmailAddresses:(id)a0 retrieveCertificates:(char)a1 retrieveAvailability:(char)a2 withStartTime:(id)a3 endTime:(id)a4;

@end
