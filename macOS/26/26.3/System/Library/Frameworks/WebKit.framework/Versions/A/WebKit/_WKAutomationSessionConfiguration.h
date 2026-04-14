@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL acceptInsecureCertificates;
@property (nonatomic) BOOL allowsInsecureMediaCapture;
@property (nonatomic) BOOL suppressesICECandidateFiltering;
@property (nonatomic) BOOL alwaysAllowAutoplay;
@property (nonatomic) BOOL siteIsolationEnabled;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
