@class NSString;

@interface TimeMachinePrivate.LookupStats : NSObject {
    void /* unknown type, empty encoding */ flagCounter;
}

@property (nonatomic) unsigned long long comparisonResult;
@property (nonatomic) unsigned long long matchingInfo;
@property (nonatomic, readonly) NSString *description;

- (void)add:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)recordComparisonResult:(unsigned long long)a0 volumeSet:(id)a1;

@end
