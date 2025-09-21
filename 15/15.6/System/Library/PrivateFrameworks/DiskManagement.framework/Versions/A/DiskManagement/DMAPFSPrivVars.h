@class DMManager, NSMutableDictionary;

@interface DMAPFSPrivVars : NSObject {
    DMManager *_dmManager;
    char _inquiryCache_Enable;
    NSMutableDictionary *_inquiryCache_MDict;
}

@end
