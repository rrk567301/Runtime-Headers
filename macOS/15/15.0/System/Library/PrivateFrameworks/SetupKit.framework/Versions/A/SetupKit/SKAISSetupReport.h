@class NSDictionary, NSString, AISSetupReport;

@interface SKAISSetupReport : NSObject

@property (readonly, copy, nonatomic) NSDictionary *accountAltDSIDsByService;
@property (readonly, copy, nonatomic) NSString *createdPersonaID;
@property (retain, nonatomic) AISSetupReport *underlyingObject;

- (void).cxx_destruct;

@end
