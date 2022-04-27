#include "catch2/catch.hpp"
#include "ApprovalTests.hpp"

TEST_CASE("MyTestCase") {
auto directoryDisposer = ApprovalTests::Approvals::useApprovalsSubdirectory("output_test_case");
ApprovalTests::Approvals::verify("something");
}