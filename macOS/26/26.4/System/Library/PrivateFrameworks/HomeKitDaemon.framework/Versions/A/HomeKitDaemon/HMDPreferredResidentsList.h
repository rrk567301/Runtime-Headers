@class NSArray, NSDate;

@interface HMDPreferredResidentsList : NSObject

@property (readonly, nonatomic) NSArray *residentIDSIdentifiers;
@property (readonly, nonatomic) NSDate *modifiedTimestamp;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithResidentIDSIdentifiers:(id)a0 modifiedTimestamp:(id)a1;

@end
