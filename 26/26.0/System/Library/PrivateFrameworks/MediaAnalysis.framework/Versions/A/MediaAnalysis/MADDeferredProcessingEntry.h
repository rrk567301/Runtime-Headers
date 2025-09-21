@class NSString, NSDate;

@interface MADDeferredProcessingEntry : NSObject

@property (retain, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) NSDate *requestDate;

+ (id)entryWithLocalIdentifier:(id)a0 requestDate:(id)a1;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)a0 requestDate:(id)a1;

@end
