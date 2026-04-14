@class NSArray, NSDate;

@interface HMDPreferredResidentsList : NSObject

@property (readonly, nonatomic) NSArray *residentIDSIdentifiers;
@property (readonly, nonatomic) NSDate *modifiedTimestamp;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithResidentIDSIdentifiers:(id)a0 modifiedTimestamp:(id)a1;

@end
