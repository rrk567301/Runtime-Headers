@class NSRelationshipDescription;

@interface HMDRelationshipCodingDescription : HMDPropertyCodingDescription {
    char _parentChild;
}

@property (readonly) NSRelationshipDescription *relationship;
@property (readonly, getter=isParentChild) char parentChild;
@property (readonly, getter=isReference) char reference;

@end
