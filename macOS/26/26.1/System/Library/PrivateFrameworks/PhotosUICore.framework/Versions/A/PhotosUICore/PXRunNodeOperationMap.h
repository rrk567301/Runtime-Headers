@class NSMapTable;

@interface PXRunNodeOperationMap : NSObject {
    NSMapTable *_operationMap;
}

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)init;
- (id)operationForRunNode:(id)a0;

@end
