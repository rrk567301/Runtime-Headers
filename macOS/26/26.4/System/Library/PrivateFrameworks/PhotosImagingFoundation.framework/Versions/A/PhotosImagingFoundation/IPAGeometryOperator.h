@class NSString;

@interface IPAGeometryOperator : NSObject <IPAGeometryOperator> {
    NSString *_identifer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (id)transformForGeometry:(id)a0;

@end
