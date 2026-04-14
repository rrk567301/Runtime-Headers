@class NSArray, NSDate;

@interface HMDPreferredResidentsList : NSObject

@property (readonly, nonatomic) NSArray *residentIDSIdentifiers;
@property (readonly, nonatomic) NSDate *modifiedTimestamp;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResidentIDSIdentifiers:(id)a0 modifiedTimestamp:(id)a1;

@end
