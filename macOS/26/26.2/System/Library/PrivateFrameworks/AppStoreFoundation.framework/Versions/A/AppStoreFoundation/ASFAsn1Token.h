@class NSData;

@interface ASFAsn1Token : NSObject {
    unsigned char mClass;
    unsigned long long mIdentifier;
    NSData *mData;
}

- (void).cxx_destruct;
- (id)description;

@end
