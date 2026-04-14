@interface NSBasicObjectID : _NSCoreManagedObjectID {
    int _cd_rc;
    id _referenceData;
}

+ (char *)generatedNameSuffix;

- (id)initWithObject:(id)a0;
- (id)_retainedURIString;
- (void)dealloc;
- (id)_referenceData;

@end
