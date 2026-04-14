@class NSArray, NSDate;

@interface FSFStreamQuery : NSObject <FSFStreamQueryProtocol> {
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ endDate;
    void /* unknown type, empty encoding */ interactionIds;
}

@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSArray *interactionIds;

- (id)init;
- (void).cxx_destruct;

@end
