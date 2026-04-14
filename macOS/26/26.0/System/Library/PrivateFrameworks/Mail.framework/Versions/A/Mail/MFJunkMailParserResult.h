@class NSString, NSSet;

@interface MFJunkMailParserResult : NSObject {
    void /* function */ plainText;
    void /* function */ imageURLs;
    void /* function */ otherURLs;
}

@property (nonatomic, readonly) NSString *plainText;
@property (nonatomic, readonly) long long characterCount;
@property (nonatomic, readonly) NSSet *imageURLs;
@property (nonatomic, readonly) NSSet *otherURLs;

- (id)init;
- (void).cxx_destruct;

@end
