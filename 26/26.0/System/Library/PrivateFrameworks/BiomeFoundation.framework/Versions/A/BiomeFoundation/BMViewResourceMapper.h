@interface BMViewResourceMapper : NSObject

@property (copy) id /* block */ databaseForViewName;
@property (copy) id /* block */ streamIdentifierForLegacyStreamName;
@property (copy) id /* block */ streamIdentifierForUUIDString;

- (void).cxx_destruct;

@end
