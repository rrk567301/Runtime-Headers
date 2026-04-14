@class NSArray;

@interface RTAuthorizedLocationDiagnosticStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSArray *fullConfirmationList;
@property (retain) NSArray *zdrConfirmationList;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatus:(id)a0 zdrConfirmationList:(id)a1;

@end
