@class NSString, EMSenderRepository;

@interface MUISearchSenderQueryManager : NSObject {
    EMSenderRepository *_senderRepository;
    NSString *_senderFilterQuery;
}

@property (readonly, copy, nonatomic) NSString *senderFilterQuery;

- (void).cxx_destruct;
- (id)initWithSenderRepository:(id)a0;

@end
