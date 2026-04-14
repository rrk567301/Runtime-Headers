@class ASFAsn1Token;

@interface ASFAsn1ReceiptToken : NSObject {
    unsigned long long mType;
    unsigned long long mTypeVersion;
    ASFAsn1Token *mContentToken;
}

- (void).cxx_destruct;
- (id)description;

@end
