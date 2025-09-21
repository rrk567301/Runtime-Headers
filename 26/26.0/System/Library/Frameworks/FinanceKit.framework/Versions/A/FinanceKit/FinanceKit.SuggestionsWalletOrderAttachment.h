@class NSURL, NSData, NSString;

@interface FinanceKit.SuggestionsWalletOrderAttachment : NSObject {
    void /* unknown type, empty encoding */ url;
    void /* function */ data;
    void /* function */ fqoid;
}

@property (nonatomic, copy) NSURL *url;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *fqoid;
@property (nonatomic) long long state;

+ (id)readContentsOfOrderAt:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
