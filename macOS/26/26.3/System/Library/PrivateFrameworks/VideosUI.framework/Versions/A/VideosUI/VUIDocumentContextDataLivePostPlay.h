@class NSString;

@interface VUIDocumentContextDataLivePostPlay : VUIDocumentContextData

@property (readonly, copy, nonatomic) NSString *canonicalId;
@property (readonly, copy, nonatomic) NSString *playablePassthrough;
@property (readonly, copy, nonatomic) NSString *broadcastLocale;

- (id)jsonData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCanonicalId:(id)a0 playablePassthrough:(id)a1 broadcastLocale:(id)a2;

@end
