@class NSString;

@interface VUIDocumentContextDataLivePostPlay : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *canonicalId;
@property (readonly, copy, nonatomic) NSString *playablePassthrough;
@property (readonly, copy, nonatomic) NSString *broadcastLocale;

- (id)jsonData;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCanonicalId:(id)a0 playablePassthrough:(id)a1 broadcastLocale:(id)a2;

@end
