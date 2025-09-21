@class NSString, NSDictionary, WBSHistoryVisitIdentifier;

@interface WBSCloudHistoryVisit : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *visitIdentifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=loadWasSuccessful) char loadSuccessful;
@property (nonatomic, getter=wasHTTPNonGet) char httpNonGet;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *redirectSourceVisitIdentifier;
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectSourceVisit;
@property (copy, nonatomic) WBSHistoryVisitIdentifier *redirectDestinationVisitIdentifier;
@property (weak, nonatomic) WBSCloudHistoryVisit *redirectDestinationVisit;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithHistoryVisit:(id)a0;
- (id)initWithVisitIdentifier:(id)a0 title:(id)a1 loadSuccessful:(char)a2 httpNonGet:(char)a3 redirectSourceVisitIdentifier:(id)a4 redirectDestinationVisitIdentifier:(id)a5;

@end
