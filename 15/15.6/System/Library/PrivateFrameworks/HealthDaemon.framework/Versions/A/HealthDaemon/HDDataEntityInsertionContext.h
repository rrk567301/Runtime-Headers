@class HDDataOriginProvenance, HDProfile;

@interface HDDataEntityInsertionContext : NSObject {
    HDProfile *_profile;
    double _defaultCreationDate;
}

@property (readonly, nonatomic) HDDataOriginProvenance *provenance;
@property (readonly, nonatomic) double creationDate;
@property (readonly, nonatomic) char skipInsertionFilter;
@property (readonly, nonatomic) char resolveAssociations;

- (void).cxx_destruct;
- (id)initWithProvenance:(id)a0 creationDate:(double)a1 skipInsertionFilter:(char)a2 resolveAssociations:(char)a3 profile:(id)a4;
- (void)prepareObjectForInsertion:(id)a0;

@end
