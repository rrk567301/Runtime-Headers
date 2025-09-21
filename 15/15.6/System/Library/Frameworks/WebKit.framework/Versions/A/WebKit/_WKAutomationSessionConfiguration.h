@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>

@property (nonatomic) char acceptInsecureCertificates;
@property (nonatomic) char allowsInsecureMediaCapture;
@property (nonatomic) char suppressesICECandidateFiltering;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
